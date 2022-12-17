
import * as React from 'react';
import Box from '@mui/material/Box';
import TextField from '@mui/material/TextField';
// import Button from './Button/Button';
export default function BasicTextFields() {
    return (
        <div>
            <div className="heading-container">
                <h3>
                    Login Form
                </h3>
            </div>

            <Box
                component="form"
                sx={{
                    '& > :not(style)': { m: 1, width: '25ch' },
                }}
                noValidate
                autoComplete="off"
            >
                <TextField id="email" label="Enter the Email" variant="outlined" />
                <TextField id="password" label="Enter the Password" variant="outlined" />
            </Box>

            {/* <Button /> */}
        </div>
    );
}


// import * as React from 'react';
// import Box from '@mui/material/Box';
// import TextField from '@mui/material/TextField';
// // import Button from "../Button/Button"

// export default function BasicTextFields({ title, setPassword, setEmail, handleAction }) {
//     return (
//         <div>
//             <div className="heading-container">
//                 <h3>
//                     {title} Form
//                 </h3>
//             </div>

//             <Box
//                 component="form"
//                 sx={{
//                     '& > :not(style)': { m: 1, width: '25ch' },
//                 }}
//                 noValidate
//                 autoComplete="off"
//             >
//                 <TextField
//                     id="email"
//                     label="Enter the Email"
//                     variant="outlined"
//                     onChange={(e) => setEmail(e.target.value)}
//                 />
//                 <TextField
//                     id="password"
//                     label="Enter the Password"
//                     variant="outlined"
//                     onChange={(e) => setPassword(e.target.value)}
//                 />
//             </Box>

//             {/* <Button title={title} /> */}
//         </div>
//     );
// }



// export default function BasicTextFields() {
//     return (
//         <div>
//             <div className="heading-container">
//                 <h3>
//                     Login Form
//                 </h3>
//             </div>

//             <Box
//                 component="form"
//                 sx={{
//                     '& > :not(style)': { m: 1, width: '25ch' },
//                 }}
//                 noValidate
//                 autoComplete="off"
//             >
//                 <TextField id="email" label="Enter the Email" variant="outlined" />
//                 <TextField id="password" label="Enter the Password" variant="outlined" />
//             </Box>

//             <Button />
//         </div>
//     );
// }